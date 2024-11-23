
lang=

function ask_lang() {
    echo "What language are you using? [c/cpp]"
    read lang 
    if [ "$lang" != "c" ] && [ "$lang" != "cpp" ]; then
        echo "No valid answer"
        ask_lang 
    fi

    echo "Response was ${lang}"
}

ask_lang
