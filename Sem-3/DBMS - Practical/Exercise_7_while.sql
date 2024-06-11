DECLARE
	I NUMBER;

BEGIN
	I := 1;
	while(I<=10)
	loop
		DBMS_OUTPUT.PUT_LINE(I);
		I := I + 1;
	end loop;

END;
/



