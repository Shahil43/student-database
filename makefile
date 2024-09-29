outfile: main.o stud_add.o stud_del.o  stud_show.o stud_sor    t.o stud_search.o stud_save.o stud_rev.o
	cc main.o stud_add.o stud_del.o stud_show.o stud_so    rt.o stud_search.o stud_save.o stud_rev.o -o outfile
main.o: main.c
	cc -c main.c
stud_add.o: stud_add.c
	cc -c stud_add.c
stud_del.o: stud_del.c
	cc -c stud_del.c
stud_show.o: stud_show.c
	cc -c stud_show.c
stud_sort.o: stud_sort.c
	cc -c stud_sort.c
stud_search.o:stud_search.c
	cc -c stud_search.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_rev.o:stud_rev.c
	cc -c stud_rev.c
clear:
	@echo "clearing up.." 
	@rm -v *.o
~                   
