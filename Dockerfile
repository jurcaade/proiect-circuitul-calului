FROM gcc:latest

MAINTAINER "Jurca Adelina-Simina <adelina.jurca@student.upt.ro>"

COPY circuitul-calului.cpp .

RUN g++ -o circuitul-calului circuitul-calului.cpp

CMD ["./circuitul-calului"]