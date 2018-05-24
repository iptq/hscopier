#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>

#include <gtk/gtk.h>

#include "osu/osu.hpp"
#include "signals.hpp"

#define UI_FILE "hscopier.glade"

static void activate(GApplication *app, gpointer user_data) {}

int main(int argc, char **argv) {
    // std::ifstream f(argv[1]);
    // std::string contents((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    // f.close();

    // // std::cout << contents << std::endl;
    // osu::BeatmapSet *s = osu::readString(contents);

    GtkWidget *window;
    GtkBuilder *builder;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, UI_FILE, NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
