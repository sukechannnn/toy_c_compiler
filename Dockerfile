FROM ubuntu:18.04

WORKDIR /app

ENV LANG C.UTF-8

RUN apt-get update -qq && \
    apt-get install -y \
    build-essential
