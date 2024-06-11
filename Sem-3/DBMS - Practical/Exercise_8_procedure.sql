create procedure P1(eno IN number, nm IN varchar)

as

begin
	update employee set emp_name = nm 
		where emp_number = eno;
end;
/
