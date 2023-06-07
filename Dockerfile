FROM ubuntu

ENV TZ=Europe/Moscow
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update
RUN apt-get install qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools -y
RUN apt-get install build-essential -y

WORKDIR /beluchenko_221-352/
RUN mkdir server
WORKDIR /beluchenko_221-352/server/
COPY *.cpp /beluchenko_221-352/server/
COPY *.h /beluchenko_221-352/server/
COPY *.pro /beluchenko_221-352/server/

RUN qmake echoServer_ex.pro
RUN make

ENTRYPOINT ["./DipoPY"] 
