create or replace trigger 
	salary_change before delete or insert or update on employee 
		for each row when (new.emp_number > 0)

declare
 	sal_diff number;

begin
	sal_diff := :new.emp_sal - :old.emp_sal;
	dbms_output.put_line('NEW SALARY : ' || :new.emp_sal);
	dbms_output.put_line('OLD SALARY : ' || :old.emp_sal);
	dbms_output.put_line('SALARY DIFFERENCE : ' || sal_diff);

end;
/
