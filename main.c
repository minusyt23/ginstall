#include <stdlib.h>
#define MAIN

#include <gtk/gtk.h>
#include "variables.h"
#include "./gui/window.c"

int main(void) {
    // You could use GtkApplications, but I don't think it's useful here.
    gtk_init();

    GMainLoop *loop = g_main_loop_new(NULL, FALSE);

    // Initialize GUI
    make_window();

    g_main_loop_run(loop);

    return EXIT_SUCCESS;
}
