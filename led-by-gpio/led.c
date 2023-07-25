#include <gpiod.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	printf("Gpiod version %s\n", gpiod_version_string());
	
	struct gpiod_chip* chip;
	struct gpiod_line* led;
	
	chip = gpiod_chip_open("/dev/gpiochip0");

	led = gpiod_chip_get_line(chip, 35);

	gpiod_line_request_output(led, "example", 0);
	
	for (int i = 0; i <= 10; ++i) {
		gpiod_line_set_value(led, i%2);
		usleep(100000);
	}

	gpiod_line_release(led);
	gpiod_chip_close(chip);
	return 0;
}
