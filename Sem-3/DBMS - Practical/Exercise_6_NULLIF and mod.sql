DECLARE
	v_num NUMBER := &sv_user_num;
	v_remainder NUMBER;

BEGIN
	-- calculate remainder and if it is zero then return NULL

	v_remainder := NULLIF(MOD(v_num,2),0);
	DBMS_OUTPUT.PUT_LINE('Remainder : ' || v_remainder);
END;
/