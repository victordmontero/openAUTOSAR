FROM debian

RUN mkdir -p /home/autosar
RUN apt update -y
RUN apt install -y gcc g++ gdb git cmake libxml2-dev zlib1g-dev liblzma-dev libicu-dev libncurses5-dev

WORKDIR /home/autosar

# RUN cmake -DCMAKE_VERBOSE_MAKEFILE=true -S . -B out
# CMD ["cmake", "--build", "out"]
CMD ["/bin/bash"]