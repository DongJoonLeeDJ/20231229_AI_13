var o_cursor refcursor 
exec person_select('djlee������', :o_cursor)
print o_cursor;
-- ctrl a�� �� ���� �� ctrl enter