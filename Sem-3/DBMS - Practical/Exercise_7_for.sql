DECLARE
	I NUMBER;

BEGIN
	for I in 1..10
	loop
		DBMS_OUTPUT.PUT_LINE(I);
	end loop;

END;
/



