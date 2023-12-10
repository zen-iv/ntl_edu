FROM ubuntu:latest
LABEL maintainer = "forwork.jp@gmail.com"
RUN apt-get update && apt-get install -y g++ nano
WORKDIR /home/zenu/ntl_edu/netology_hw4.5.2/gcc/
COPY programm.cpp .
RUN g++ programm.cpp -o programm
CMD ["./programm"]
