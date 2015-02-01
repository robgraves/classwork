#!/bin/bash
#robgraves ffmpeg command for Arch desktop screencasting

ffmpeg -f alsa -ac 2 -i plughw:0,0 -f x11grab -r 100 -s 1920x1080 -i :0.0 -acodec pcm_s16le -vol 768 -vcodec libx264 -preset ultrafast -threads 5 output.mkv