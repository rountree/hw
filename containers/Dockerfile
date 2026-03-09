ARG ubuntu_version=noble
FROM ubuntu:${ubuntu_version}
USER root
ENV TMPDIR=/tmp
RUN echo 'TMPDIR="/tmp"' >> /etc/environment

RUN DEBIAN_FRONTEND="noninteractive" apt-get update \
 && apt-get -qq install -y --no-install-recommends \
        apt-utils

RUN DEBIAN_FRONTEND="noninteractive" apt-get -qq install -y --no-install-recommends \
        locales \
        ca-certificates \
        wget \
        ssh



