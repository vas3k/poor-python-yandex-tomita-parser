#encoding "utf-8"
#GRAMMAR_ROOT S

AlbumName -> 'альбом' AnyWord<h-reg1, l-quoted> AnyWord<~r-quoted>* AnyWord<r-quoted>;
GroupName -> Word<kwtype="слово_группа", nc-agr[1]> Word<h-reg1, nc-agr[1]>+;
S -> GroupName interp(Group.Name::not_norm);
S -> AlbumName interp(Album.Name::not_norm);
