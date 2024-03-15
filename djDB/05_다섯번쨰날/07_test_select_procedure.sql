var o_cursor refcursor 
exec person_select('djlee선생님', :o_cursor)
print o_cursor;
-- ctrl a로 다 선택 후 ctrl enter