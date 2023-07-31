#!bin/bash

if [ $# -eq 0]
then
	echo "No arguments supplied. Script requires directory name in the /mnt point"
fi

sudo systemctl daemon-reload
sudo mkdir /mnt/$1
sudo mount /dev/sda /mnt/$1/
sudo chmod -R 777 /mnt/$1/
