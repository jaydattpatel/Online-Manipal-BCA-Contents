DECLARE

	emp_n employee.emp_number%type := &number;
	name employee.emp_name%type;

BEGIN

	select emp_name into name from employee 
		where emp_number = emp_n;
	DBMS_OUTPUT.PUT_LINE('Name : '|| name);

exception 
	when NO_DATA_FOUND then 
		dbms_output.put_line('No Such Employee');

END;
/