DECLARE
	v_num1 NUMBER := &sv_num1;
	v_num2 NUMBER := &sv_num2;
	v_num3 NUMBER := &sv_num3;
	v_result NUMBER;

BEGIN
	/*find first not null value and return that value */
	v_result := coalesce(v_num1, v_num2, v_num3);
	DBMS_OUTPUT.PUT_LINE('Result : ' || v_result);
END;
/