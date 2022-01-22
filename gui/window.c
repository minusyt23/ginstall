#include <gtk/gtk.h>
#include "../variables.h"

#include "sidebar.c"
#include "install.c"

// Callback goes here

void make_window(void) {
    /* SETUP WINDOW */
    win.window = gtk_window_new();

    // Due to X usage, you have to sbo
    // Get screen size
    GdkDisplay* dp = gdk_display_get_default();
    GdkMonitor* mt = g_list_model_get_item((gdk_display_get_monitors(dp)), 0);
    GdkRectangle geometry;
    gdk_monitor_get_geometry(mt, &geometry);
    int sw = geometry.width; int sh = geometry.height;

    // Make fullscreen
    gtk_widget_set_size_request(GTK_WIDGET(win.window), sw, sh);

    /* ADD WIDGETS */
    win.grid = gtk_grid_new();
    gtk_grid_set_row_homogeneous(GTK_GRID(win.grid), FALSE);
    gtk_grid_set_column_homogeneous(GTK_GRID(win.grid), FALSE);
    

    make_sidebar();
    make_install();
    
    // Give grid to window.
    gtk_window_set_child(GTK_WINDOW(win.window), win.grid);

    // Show window
    gtk_window_present (GTK_WINDOW(win.window));
}