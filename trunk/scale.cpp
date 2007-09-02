#include <scale.h>

Scale::Scale(char *p, QString n){
	name = n;

	for(int i = 0; i < 12; i++){
		if(p[i] == '0')
			pattern[i] = false;
		else
			pattern[i] = true;
	}
}

bool Scale::hasNote(int note) {
	return pattern[note % 12];
}

QString Scale::getName() {
	return name;
}

/* SCALE FINDER */
ScaleFinder::ScaleFinder() {
	scales.push_back(new Scale("101011010101", "Major"));
	scales.push_back(new Scale("101101011010", "Natural Minor"));
	scales.push_back(new Scale("101101011001", "Harmonic Minor"));
	scales.push_back(new Scale("101101010101", "Melodic Minor"));
	scales.push_back(new Scale("101001010100", "Pentatonic Major"));
	scales.push_back(new Scale("100101010010", "Pentatonic Minor"));
	scales.push_back(new Scale("100101110010", "Pentatonic Blues"));
	scales.push_back(new Scale("101001010010", "Pentatonic Neutral"));
	scales.push_back(new Scale("101011010101", "Ionian"));
	scales.push_back(new Scale("101101011010", "Aeolian"));
	scales.push_back(new Scale("101101010110", "Dorian"));
	scales.push_back(new Scale("101011010110", "Mixolydian"));
	scales.push_back(new Scale("110101011010", "Phrygian"));
	scales.push_back(new Scale("101010110101", "Lydian"));
	scales.push_back(new Scale("110101101010", "Locrian"));
	scales.push_back(new Scale("110110110110", "Dim half"));
	scales.push_back(new Scale("101101101101", "Dim whole"));
	scales.push_back(new Scale("101010101010", "Whole"));
	scales.push_back(new Scale("100110011001", "Augmented"));
	scales.push_back(new Scale("101100110110", "Roumanian Minor"));
	scales.push_back(new Scale("110011011010", "Spanish Gypsy"));
	scales.push_back(new Scale("100101110010", "Blues"));
	scales.push_back(new Scale("101010010100", "Diatonic"));
	scales.push_back(new Scale("110011011001", "Double Harmonic"));
	scales.push_back(new Scale("110111101010", "Eight Tone Spanish"));
	scales.push_back(new Scale("110010101011", "Enigmatic"));
	scales.push_back(new Scale("101010101110", "Leading Whole Tone"));
	scales.push_back(new Scale("101010101101", "Lydian Augmented"));
	scales.push_back(new Scale("110101010101", "Neoploitan Major"));
	scales.push_back(new Scale("110101011010", "Neopolitan Minor"));
	scales.push_back(new Scale("110100100011", "Pelog"));
	scales.push_back(new Scale("101010100110", "Prometheus"));
	scales.push_back(new Scale("110010100110", "Prometheus Neopolitan"));
	scales.push_back(new Scale("110011001100", "Six Tone Symmetrical"));
	scales.push_back(new Scale("110110101010", "Super Locrian"));
	scales.push_back(new Scale("101010111010", "Lydian Minor"));
	scales.push_back(new Scale("101100111010", "Lydian Diminished"));
	scales.push_back(new Scale("101110111101", "Nine Tone Scale"));
	scales.push_back(new Scale("101101101101", "Auxiliary Diminished"));
	scales.push_back(new Scale("101010101010", "Auxiliary Augmented"));
	scales.push_back(new Scale("110110110110", "Auxiliary Diminished Blues"));
	scales.push_back(new Scale("101011101010", "Major Locrian"));
	scales.push_back(new Scale("101010110110", "Overtone"));
	scales.push_back(new Scale("110110101010", "Diminished Whole Tone"));
	scales.push_back(new Scale("101101011010", "Pure Minor"));
	scales.push_back(new Scale("101001010110", "Dominant 7th"));

	scale = scales[0];
	method = 0;
	active = false;
	root = 0;
}

Scale *ScaleFinder::getScale(int i) {
	if(i >= scales.size())
		return NULL;

	return scales[i];
}

int ScaleFinder::findNote(int note){
	if(!active || scale->hasNote(note - root))
		return note;
	
	int m;

	if(method == METHOD_RANDOM)
		m = (rand()%2?METHOD_UP:METHOD_DOWN);
	else
		m = method;

	for(int i = 1; i < 12; i++){
		note += (m==METHOD_UP)?i:-i;
		if(scale->hasNote(note - root))
			break;
	}
	return note;
}

