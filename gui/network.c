#include <gtk/gtk.h>
#include "../variables.h"

// Callback goes here

void make_network(void) {
    win.network.testButton = gtk_button_new_with_label("Very cool button for network");
    
    // add to stack
    gtk_stack_add_titled(GTK_STACK(win.stack), win.network.testButton, "net", "Network Setup");
}