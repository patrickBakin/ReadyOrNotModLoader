#include "MoviePlayerSettings.h"

UMoviePlayerSettings::UMoviePlayerSettings() {
    this->bWaitForMoviesToComplete = true;
    this->bMoviesAreSkippable = false;
    this->StartupMovies.AddDefaulted(1);
}

