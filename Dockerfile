FROM gcc:latest

COPY circuitul-calului.cpp .

RUN g++ -o circuitul-calului circuitul-calului.cpp

CMD ["./circuitul-calului"]