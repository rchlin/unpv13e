include ../Make.defines

EXE = daytimetcpcli daytimetcpcliv6 daytimetcpsrv daytimetcpcli13 daytimetcpcli14
all: $(EXE)
.PHONY: all

daytimetcpcli: daytimetcpcli.c
	gcc daytimetcpcli.c -o $@ $(INCLU) $(LIB) -lunp
daytimetcpcliv6: daytimetcpcliv6.c
	gcc daytimetcpcliv6.c -o $@ $(INCLU) $(LIB) -lunp
daytimetcpsrv: daytimetcpsrv.c
	gcc daytimetcpsrv.c -o $@ $(INCLU) $(LIB) -lunp
daytimetcpcli13: daytimetcpcli13.c
	gcc $^ -o $@ $(INCLU) $(LIB) -lunp
daytimetcpcli14: daytimetcpcli14.c
	gcc $< -o $@ $(INCLU) $(LIB) -lunp
%:
	gcc $*.c -o $* $(INCLU) $(LIB) -lunp

clean:
	rm $(EXE)
