FROM ubuntu:latest
	LABEL maintainer="forwork.jp@mail.ru"
	RUN apt-get update && apt-get install -y g++ nano net-tools
	WORKDIR /home/zenu/ntl_edu/netology_hw4.5.1/
	COPY dockerHelloWorld.cpp .
	RUN g++ dockerHelloWorld.cpp -o dockerHelloWorld
	CMD ["./dockerHelloWorld"]
