include ../Make.defines

EXE = daytimetcpcli daytimetcpcliv6 daytimetcpsrv
all: $(EXE)
.PHONY: all

daytimetcpcli: daytimetcpcli.c
	gcc daytimetcpcli.c -o $@ $(INCLU) $(LIB) -lunp
daytimetcpcliv6: daytimetcpcliv6.c
	gcc daytimetcpcliv6.c -o $@ $(INCLU) $(LIB) -lunp
daytimetcpsrv: daytimetcpsrv.c
	gcc daytimetcpsrv.c -o $@ $(INCLU) $(LIB) -lunp

clean:
	rm $(EXE)
