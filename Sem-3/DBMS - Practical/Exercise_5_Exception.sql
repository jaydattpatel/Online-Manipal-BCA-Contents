DECLARE

	a int := 10;
	b int := 0;
	ans int;

BEGIN

	ans := a/b;
	dbms_output.put_line('The result after division : ' || ans);

EXCEPTION

	WHEN zero_divide THEN
			dbms_output.put_line('Division by zero, please check your values');
			dbms_output.put_line('a = ' || a);
			dbms_output.put_line('b = ' || b);
END;
/