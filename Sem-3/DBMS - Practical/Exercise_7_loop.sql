DECLARE
	I NUMBER;

BEGIN
	I := 1;
	loop
		DBMS_OUTPUT.PUT_LINE(I);
		I := I + 1;
		exit when I > 10;
	end loop;

END;
/



