DECLARE
	ne number;
	xsal number;
BEGIN
	xsal := 60000;
	ne := count_emp(xsal);
	dbms_output.put_line(xsal);
	dbms_output.put_line('There are '|| ne || ' employees');
END;
/