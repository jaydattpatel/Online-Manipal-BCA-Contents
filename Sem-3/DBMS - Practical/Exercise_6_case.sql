DECLARE
	v_num1 NUMBER := &sv_num1;
	v_num2 NUMBER := &sv_num2;
	v_num3 NUMBER := &sv_num3;
	v_result NUMBER;

BEGIN
	/*case will give value as per condition satisfy.*/
	v_result := CASE
		WHEN v_num1 IS NOT NULL THEN v_num1
		WHEN v_num2 IS NOT NULL THEN v_num2
	ELSE 
		v_num3
	END;
	DBMS_OUTPUT.PUT_LINE('RESULT: '||v_result);

END;
/



