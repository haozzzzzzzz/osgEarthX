#!/bin/bash

find . -type d | grep doc$ | xargs rm -Rf -v
cd libs
find . -type d | grep test$ | xargs rm -Rf -v
find . -type d | grep example$ | xargs rm -Rf -v
find . -type d | grep examples$ | xargs rm -Rf -v
find . -type d | grep tools$ | xargs rm -Rf -v
find . -type d | grep build$ | xargs rm -Rf -v
find . -type d | grep tutorial$ | xargs rm -Rf -v
find . -type d | grep proj$ | xargs rm -Rf -v
find . -type d | grep perf$ | xargs rm -Rf -v
find . -type d | grep vc7ide$ | xargs rm -Rf -v
find . -type d | grep util$ | xargs rm -Rf -v
find . -type d | grep performance$ | xargs rm -Rf -v
find . -type d | grep book$ | xargs rm -Rf -v
find . -type d | grep preprocessed$ | xargs rm -Rf -v
cd -

find . | grep .html$ | xargs rm -Rf -v
find . | grep .css$ | xargs rm -Rf -v
find . | grep .htm$ | xargs rm -Rf -v
find . | grep .gif$ | xargs rm -Rf -v
find . | grep .txt$ | xargs rm -Rf -v
find . | grep .jpg$ | xargs rm -Rf -v
find . | grep .png$ | xargs rm -Rf -v
find . | grep .zip$ | xargs rm -Rf -v
find . | grep .py$ | xargs rm -Rf -v
find . | grep sublibs$ | xargs rm -Rf -v
find . | grep Jamroot | xargs rm -Rf -v

find . -type d -empty | xargs rm -Rf -v
