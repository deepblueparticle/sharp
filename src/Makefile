include Makefile.thrift.inc

CXX=g++
CXXFLAGS=-DIB_USE_STD_STRING -Wall -Wno-switch -g -std=c++0x -O3

BASE_SRC_DIR=../PosixClient/src
THRIFT_DIR = ./thrift
INCLUDES=-I../PosixClient/Shared/ -I${BASE_SRC_DIR} -Ithrift
LDLIBS += $(PROTOCOL_LIBS) -lboost_log -lboost_log_setup -lboost_thread -lboost_filesystem -lboost_system -lpthread -lrt -ldl

TARGET=server

$(TARGET): server.cpp client.cpp sharp.cpp sharp.h sharp-thrift.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o EClientSocketBase.o -c $(BASE_SRC_DIR)/EClientSocketBase.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o EPosixClientSocket.o -c $(BASE_SRC_DIR)/EPosixClientSocket.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -DBOOST_LOG_DYN_LINK -o sharp.o -c sharp.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -DBOOST_LOG_DYN_LINK -o sharp-thrift.o -c sharp-thrift.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o server.o -c server.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o client.o -c client.cpp
	$(CXX) $(LDFLAGS) server.o sharp.o EClientSocketBase.o EPosixClientSocket.o $(PROTOCOL_OBJS) -o $@ $(LDLIBS)
	$(CXX) $(LDFLAGS) client.o sharp.o EClientSocketBase.o EPosixClientSocket.o $(PROTOCOL_OBJS) -o client $(LDLIBS)

clean:
	rm -f $(TARGET) *.o

