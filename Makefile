CC=gcc
CFLAGS=-fPIC -shared -g
#MPI_HOME=/apps/OPENMPI/1.8.1-mellanox
MPI_HOME=/usr
#PAPI_HOME=/apps/CEPBATOOLS/deps/papi/5.4.1
PAPI_HOME=/usr

INCLUDES=-I$(MPI_HOME)/include -I$(MPI_HOME)/include/mpi -I$(PAPI_HOME)/include
LIBS=-L$(MPI_HOME)/lib -lmpi -L$(PAPI_HOME)/lib -lpapi -Wl,-rpath,$(PAPI_HOME)/lib

all: libextrae-lite-c.so libextrae-lite-f.so

SOURCES_C =        \
  extrae_lite.c    \
  mpi_wrappers_c.c \
  utils.c

SOURCES_F =        \
  extrae_lite.c    \
  mpi_wrappers_f.c \
  utils.c

libextrae-lite-c.so: $(SOURCES_C)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ $(LIBS)

libextrae-lite-f.so: $(SOURCES_F)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ $(LIBS)

clean:
	rm -rf libextrae-lite-c.so libextrae-lite-f.so *.o
