FROM ubuntu:latest
LABEL maintainer = "forwork.jp@gmail.com"
RUN apt-get update && apt-get install -y clang nano
WORKDIR /home/zenu/ntl_edu/netology_hw4.5.2/clang/
COPY programm.cpp .
RUN clang -o programm programm.cpp -lstdc++
CMD ["./programm"]
