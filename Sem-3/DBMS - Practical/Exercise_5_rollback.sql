DECLARE
	rollno student.sno%type;
	snm student.sname%type;
	s_age student.age%type;
	s_cr student.course%type;

BEGIN
	rollno := &sno;
	snm := '&sname';
	s_age := &age;
	s_cr := '&course';
	insert into student values(rollno,snm,s_age,s_cr);
	dbms_output.put_line('One Record Entered');
	ROLLBACK;
END;
/
	