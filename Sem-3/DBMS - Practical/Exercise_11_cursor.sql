declare
 	cursor c2 is select * from employee;
 	erec employee%rowtype;

begin
	open c2;
	loop
		fetch c2 into erec;
		exit when (c2%rowcount > 2);
		dbms_output.put_line('-----------------------');
		dbms_output.put_line('EMP NAME : ' || erec.emp_name);
		dbms_output.put_line('EMP NUMBER : ' || erec.emp_number);
	end loop;
	dbms_output.put_line('NO. OF EMPLOYEES : ' || c2%rowcount);
	close c2;
end;
/
