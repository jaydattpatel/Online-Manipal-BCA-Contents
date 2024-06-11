DECLARE
	result number;

BEGIN
	result := add_fun(10,20);
	dbms_output.put_line('SUM = ' ||result);
END;
/
