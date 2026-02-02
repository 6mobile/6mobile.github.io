---
description: '6.1820 : Mobile and Sensor Computing Course'
title: '6.1820 - Lab 0'
header-includes: <script src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.18.1/highlight.min.js"></script><script>hljs.initHighlightingOnLoad();</script>
---

::: {#header_wrap .outer}
::: {#main_content .section .inner}
[6.1820](../index.html) {#project_title}
======================

Lab 0 {#project_tagline}
-----

Assigned: 2025-02-04\
Due: 2025-02-11\
:::
:::

::: {#main_content_wrap .outer}
::: {#main_content .section .inner}
\[ [Xcode\'s Layout](#layout) \| [Xcode Shortcuts](#xcode-shortcuts) \|
[Xcode Docs](#xcode-docs) \| [Lab Assignment](#assignment) \]

In this lab, we cover the basics of the Xcode IDE, the iOS Simulator,
Xcode\'s Documentation Viewer, and the Swift programming language. By
the end of lab, we\'ll have built a simple iPhone application that
displays weather from the [OpenWeather](https://openweathermap.org/current) API.

To complete this lab, you\'ll need to download
[Xcode](macappstores://itunes.apple.com/us/app/xcode/id497799835).

------------------------------------------------------------------------

First, a little about Xcode\'s layout: {#layout}
--------------------------------------

![](images/lab0/xcode_layout.png "panels: left: navigator, top: menu, right: utilities (right top: inspector, right bottom: library) bottom: debugger (bottom left:variables, bottom right:console)")\
![](images/lab0/toggle_buttons.png "buttons (left to right): Single (standard) editor, Assistant (split screen) editor, Version (git) editor | Toggle Nagivator, Toggle Debugger, Toggle Utilities")

------------------------------------------------------------------------

Some helpful Xcode shortcuts and tips {#xcode-shortcuts}
-------------------------------------

  --------------------- ------------------------------------
  View Documentation:   ⌥+Click
  Open Docs:            ⇧⌘[0]{style="font-family:Monaco;"}
  Go to Definition:     ⌘+Click
  Open file Quickly:    ⇧⌘O
  --------------------- ------------------------------------

⌘ = Command \| ⌥ = Option \| ⇧ = Shift

------------------------------------------------------------------------

Some helpful iOS Simulator shortcuts and tips {#sim-shortcuts}
---------------------------------------------

  ------------------------------------------------------------ -----
  Press Home Button:                                           ⇧⌘H
  Rotate Left                                                  ⌘←
  Rotate Right                                                 ⌘→
  If the keyboard isn\'t appearing/disappearing as expected:   ⌘K
  ------------------------------------------------------------ -----

⌘ = Command \| ⌥ = Option \| ⇧ = Shift

Xcode Documentation {#xcode-docs}
-------------------

Shortcut: ⇧⌘0

![](images/lab0/amazing.gif){alt="amazing"}

It\'s kind of amazing.

![](images/lab0/slow.gif){alt="slow sloth stamping"}

It syncs locally, which takes a while

![](images/lab0/speed.gif){alt="The Flash"}

But once it\'s downloaded, it\'s crazy fast.

![](images/lab0/example.gif){alt="house"}

It includes ready-to-build example projects for downloads.

![](images/lab0/option_click.gif){alt="option\_click"}

You can get to class documentation by option + clicking the class in
question.

Some info about Swift
---------------------

You may check [Apple\'s Swift
Tour](https://docs.swift.org/swift-book/GuidedTour/GuidedTour.html) or
[Apple\'s Swift
basics](https://docs.swift.org/swift-book/LanguageGuide/TheBasics.html)
for details.

On to your lab assignment! {#assignment}
--------------------------

![](images/lab0/lab_result_latlon.gif){alt="picture of iOS Simulator loading weather
in a barebones app."}

You\'re building an app that basically loads the weather.

The fetchWeather is asynchronous. If there\'s no network, the app
shouldn\'t hang or crash.

We\'ve recorded videos with instructions on how to complete the lab in
Swift. (The videos have no sound.) The goal is to get you comfortable
with Xcode, the docs, the simulator, and Swift.

The videos build off of one another. You can do the assignment in your
own way, or in the exact way it\'s done in the videos. It\'s entirely up
to you.

The videos were recorded a few years ago, so some details about XCode\'s
user inferface and Swift have changed. Also, the recordings were based
on Wunderground API, which is no longer available. We suggest using the
[OpenWeather](https://openweathermap.org/api) API to get current weather
conditions instead. You can see an example JSON response
in [OpenWeather documentation](https://openweathermap.org/current). We have
noted changes for each video, if applicable, at the description before
the corresponding video.

#### Video 1 - Hello World

We create the project and print \"Hello World\". You\'ll also notice
that we resize the simulator, and click on some of the menu bars. This
just so that you see what those buttons do.

When creating a project, first select "App" (you won't see single-view application), then select \"Storyboard\" for \"User Inferface\". Another option is \"SwiftUI\", which is actually a newer method but is not compatible with the tutorial videos.

![](images/lab0/new_project.png){width="640" alt="new project"}

<iframe width="640" height="385"
src="https://www.youtube.com/embed/qYklGQAuZ5Q" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 2 - Making a `Weather` Class

Here, we define a weather class with some properties and methods.

**Changes:**

- You'll notice that the rest of the videos test/simulate on an iPhone. You should simulate on the device that is most similar to the one you will be using for hardware (e.g. if you plan to upload live code to an iPad, simulate on an iPad).

<iframe width="640" height="385"
src="https://www.youtube.com/embed/Jvjs8ePFl2Y?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 3 - Flushing out the `Weather` Methods

We add some details to the weather methods from the previous video. In
the next video, we instantiate the weather class, and debug it. This
video contains an intentional error. We\'ll debug it in the next one.

**Changes:**

-   Make sure to update the URLs and APP IDs with the ones you receive from OpenWeather. More details can be found on the [documentation](https://openweathermap.org/current)

-   The url string is
    `"https://api.openweathermap.org/data/2.5/weather?zip=\(zip)&appid=\(APP_ID)&units=imperial"`.

-   Create an API key by registering on the website for the free plan. You will receive an API Key in your email.

- You may need to update some of the response field names if OpenWeather doesn't provide them (e.g. windString). The specifics of which fields you are displaying aren't super important (you need to at least have the current temp) -- just include 4-5 different ones like humidity, wind speed, etc.

<iframe width="640" height="385"
src="https://www.youtube.com/embed/YYCasqQWSnU?rel=0" frameborder="0"
allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 4 - Instantiating and Debugging `Weather`

There was an error with weather. We illustrate some of the tools the
debugger has.

Using the debugger will make your life much, much easier, and we think
it\'s worth learning.

**Changes:** Take a look at an example JSON response in [OpenWeather API
documentation](https://openweathermap.org/current#parameter).

-   The correct key for JSON is `"main"`, instead of
    `"current_observation"`. 

-   What should be the key for current weather description? wind? visibility?


-   For other values, the JSON response returns a number, not a string.
    We need to cast it into `Double` before using it in a meaningful
    string, e.g.

        self.windString = "Wind speed: \(currentObservations["temp"] as! Double) mph"

    Can you find the correct key for each field (e.g. `"humidity"` for
    humidity)?

<iframe width="640" height="385"
src="https://www.youtube.com/embed/yIXXW55gwHw?rel=0" frameborder="0" allowfullscreen>
</iframe>

------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 5 - Adding a button to the UX, defining constraints

We add a new button to the interface and define its constraints.

**We\'re pressing the control key while dragging from the button to the
`ViewController.swift` file.**

In new versions of XCode, the Library button (where you add UI elements
like Button and Label) is the plus sign button at the top right corner
instead. Also, you can show an Assistant editor by clicking Editor \>
Assistant or by using the following shortcut: ⌃⌥⌘↩︎.

<iframe width="640" height="385"
src="https://www.youtube.com/embed/aT5O_qyeQGk?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 6 - Enabling the button

This is pretty straightforward. We\'re making the button actually do
stuff now.

Again remember to press the control key (⌃) while dragging!

<iframe width="640" height="385"
src="https://www.youtube.com/embed/evw_KboMG2Q?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 7 - Adding more UI Elements

We add some labels to display the weather. Note how we\'re using stack
view here.

There are at least 5 ways to lay out elements in Xcode. This is probably
the fastest.

Do not worry about the exact alignment of the elements too much, as long
as they show up on the simulators. If they don\'t, some constraints may
need to be changed or deleted (check the View Controller \> View \>
Constraints on the left).


<iframe width="640" height="385"
src="https://www.youtube.com/embed/KWdTqycEP-E?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 8 - Making the UI Labels Update

We now update the UI Labels when results are fetched from the API.

<iframe width="640" height="385"
src="https://www.youtube.com/embed/r55JUaOVh7k?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 9 - UI Polish

This is about showing and hiding the keyboard. If the keyboard does not
show up, try pressing ⌘K (Hardware \> Keyboard \> Toggle Software
Keyboard) to see if the keyboard shows up.

**Changes:**

-   The keyboard type should be \"Numbers and Punctuation\" instead of
    \"Number Pad\", but this may not be too different on iPad anyway.


<iframe width="640" height="385"
src="https://www.youtube.com/embed/kFcwheYqVKQ?rel=0" frameborder="0" allowfullscreen>
</iframe>
------------------------------------------------------------------------

------------------------------------------------------------------------

#### Video 10 - Blocks and Async [Optional!]

We update the app to work asynchronously. Mobile devices often have very
flaky connections, so it\'s important to know how to deal with them.

We don\'t have a video here. Instead, we put the code of two important
functions here. You may try them, or write your own.

\"Weather.swift\": `fetchWeatherForZip` function

    func fetchWeatherForZip(zip:String, completionHandler: @escaping (Bool) -> Void) -> Void {
        NSLog("Getting for:  \(zip)")
        let urlString : String = "https://api.openweathermap.org/data/2.5/weather?zip=\(zip)&appid=\(APP_ID)&units=imperial"

        NSLog(urlString)

        let weatherURL = URL(string: urlString)

        let session = URLSession.shared
        let request = URLRequest(url: weatherURL!, cachePolicy: URLRequest.CachePolicy.useProtocolCachePolicy, timeoutInterval: 5.0)

        let task = session.dataTask(with: request, completionHandler: {(data, response, error) in
                let ret = self.parseData(data: data)
            DispatchQueue.main.async(execute: {()->Void in completionHandler(ret)})
        })

        task.resume()

    }

\"ViewController.swift\" `getWeather` function (Button Handler)


    @IBAction func getWeather(_ sender: UIButton) {
        NSLog("Get weather!!")
        sender.isEnabled = false
            weather.fetchWeatherForZip(zip: zip.text!, completionHandler: {(ret: Bool)->Void in
                if (ret)
                {
                    NSLog("Succeeded")
                    self.temp.text = String(self.weather.currentTemp)
                    //add your fields here
                } else {
                    NSLog("Failed")
                }
                sender.isEnabled = true
            })

        zip.resignFirstResponder()
    }

------------------------------------------------------------------------

------------------------------------------------------------------------

That\'s it for now. Have a good one!

![](images/lab0/hack_the_planet.gif "There are no speed limits on the information highway."){alt="HACK THE
PLANET!"}

Check-offs {#checkoff}
----------

We will hold checkoffs during office hours and the optional iOS tutorial on Friday Feb 7. Lab 0 is due the next Tuesday, so we will also hold checkoffs after that date.

:::
:::
