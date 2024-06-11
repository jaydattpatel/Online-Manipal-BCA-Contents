
create or replace function count_emp(esal number) 
return number as c number;

declare

cursor vin_cur is 
select emp_number, emp_sal from employee;

xno employee.emp_number%type;
xsal employee.emp_sal%type;
c number;

begin

	open vin_cur;
	c := 0;
	loop
		fetch vin_cur into xno, xsal;
		if (xsal < esal) then
			c := c + 1;
		end if;
		exit when vin_cur%notfound;
	end loop;
	close vin_cur;
	return c;
end;
/
