#!bin/bash

if [ $# -eq 0 ]
  then
    echo "No arguments supplied. Script requires your e-mail to generate ssh key."
fi

ssh-keygen -t ed25519 -C $1