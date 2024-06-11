DECLARE
	sno int := &sno;
	sname varchar(20) := '&sname';
	m1 int := &m1;
	m2 int := &m2;
	m3 int := &m3;
	total int;
	avg1 float;
	class varchar(30);

BEGIN

	total := m1+m2+m3;
	avg1 := total/3;
	if m1>35 AND m2>35 AND m3>35 then
		if avg1>60 then 
			class := 'first';
		end if;
		if avg1>50 AND avg1<60 then 
			class := 'second';
		end if;
		if avg1>40 AND avg1<50 then 
			class := 'third';
		end if;
	else
		class := 'fail';
	end if;

	insert  into student values(sno,sname,m1,m2,m3,total,avg1,class);
END;
/
	