create or replace function add_fun(a number, b number)

return number as c number;

begin
	c := a + b;
	return c;
end;
/
