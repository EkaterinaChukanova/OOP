FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    g++ \
    git \
    libgtest-dev \
    && rm -rf /var/lib/apt/lists/*

RUN cd /usr/src/gtest && \
    cmake . && \
    make && \
    cp lib/*.a /usr/lib && \
    ln -s /usr/src/gtest/lib/gtest /usr/lib/gtest

WORKDIR /workspace