//This is a JavaScript file that plays 'The Rainbow Connection'

"use strict";

//Create a variable to store the sound file
let rainbowConnection = new Audio('rainbowConnection.mp3');

//Start playing the song
rainbowConnection.play();

//Create a variable for the notes 
let notes = [
    "C4", 
    "D4", 
    "E4", 
    "G4", 
    "F4", 
    "E4", 
    "D4", 
    "C4", 
    "E4", 
    "G4", 
    "A4", 
    "A4", 
    "G4", 
    "F4", 
    "E4", 
    "D4", 
    "E4", 
    "A4", 
    "G4", 
    "F4", 
    "E4", 
    "D4"
];

//Create a variable for the durations
let durations = [
    "2n",
    "2n + 8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "8n",
    "2n + 8n",
    "4n + 4n",
    "4n + 4n",
    "4n + 4n",
    "8n",
];

//Create a Tone.js synth
let synth = new Tone.Synth().toMaster();

//Set the attack level
synth.set("attackLevel", 0.2);

//Set the decay level
synth.set("decayLevel", 0.8);

//Loop over each note/duration in the notes and durations array
//Play each note for the specified duration
for (let i=0; i<notes.length; i++) {
    let note = notes[i];
    let duration = durations[i];
    synth.triggerAttackRelease(note, duration);
}

//When the song finishes, stop the audio
rainbowConnection.onended = () => {
    rainbowConnection.pause();
};