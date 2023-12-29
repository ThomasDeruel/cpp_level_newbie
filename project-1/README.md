# What I learned ?

- Create a custom shortcut with script (snippet / extraits)

```json
{
    // save, build and run C++
    "key": "ctrl+alt+b",
    "command": "runCommands",
    "args": {
        "commands": [
            "workbench.action.files.save", // raccourcis pour save
            "workbench.action.tasks.build" // raccourcis local pour build
        ]
    }
}
``````