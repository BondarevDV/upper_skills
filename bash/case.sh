#!/bin/bash





case "$1" in 
	start)
		echo "Start server"
		;;
	stop)
		echo "Stop service"
		;;
	*)
		echo "Usage:  $0 {start|stop}"
	        exit 1	
		;;
esac

