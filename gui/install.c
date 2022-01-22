#include <gtk/gtk.h>
#include "../variables.h"

// Callback goes here

void make_install(void) {
    // Create button
    win.installButton = gtk_button_new_with_label("Install");
    gtk_widget_set_margin_bottom(win.installButton, 5);
    gtk_widget_set_margin_top(win.installButton, 5);
    gtk_widget_set_margin_start(win.installButton, 5);
    gtk_widget_set_margin_end(win.installButton, 5);
    gtk_widget_set_size_request(win.installButton, 150, 30);

    // Create info box
    win.infoHbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_widget_set_hexpand(win.infoHbox, TRUE);

    // Attach to grid
    gtk_grid_attach(GTK_GRID(win.grid), win.installButton, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(win.grid), win.infoHbox, 1, 1, 1, 1);
}