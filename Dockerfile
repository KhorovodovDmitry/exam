#Хороводов Дмитрий 231-352

FROM ubuntu:18.04

LABEL author="Хороводов Дмитрий 231-352"

RUN apt-get update && apt install -y gcc g++ qtcreator qtbase5-dev qt5-qmake cmake

RUN mkdir -p /myproj_231-352_khorovodov

WORKDIR /myproj_231-352_khorovodov

COPY . /myproj_231-352_khorovodov/

RUN qmake my_Program.pro
RUN make

CMD ["./my_Program", "default_parameter"]