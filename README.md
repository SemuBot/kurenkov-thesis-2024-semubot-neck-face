# kurenkov-thesis-2024-semubot-neck-face
Author: Nikita Kurenkov

## ENG
This repository contains the table of materials, design files needed for the fabrication and instructions for assembling a neck mechanism for the Social Humanoid Robot SemuBot.


![](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Media/Head%20Motor%20movement.gif)
![](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Media/GIF%20-%20Headmove.gif)
![](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Media/GIF%20-%20Headmovenoface.gif)
![](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Media/Neck%20Mechanism%20Assembly%20Build.gif)

### Materials ###

| Item | Amount | Link to the item |
| ---- | :---: |  ---- |
| 30x30mm Aluminum Spine | 1 | - |
| Nema 11 Stepper L=31mm | 1 | https://www.omc-stepperonline.com/nema-11-stepper-l-31mm-w-rear-shaft-gear-ratio-27-1-planetary-gearbox-11hs12-0674d-pg27 |
| Sliding T Slot Nut M6 for 30x30 extrusion | 3 | - |
| M6 x 6mm Bolt | 3 | - |
| Spine Connector | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Spine%20Connector.stl |
| M3 x 4mm Phillips Flat Head Bolt | 8 | - |
| M3-0.5 Threaded Heat Set Insert | 20 | - |
| Bearing 65x50x7mm | 1 | - |
| Head Mover | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Head%20Mover.stl |
| M3 Nut Bolt | 20 | - |
| M3 x 6mm Bolt | 30 | - |
| M3 x 25mm Bolt | 6 | - |
| Bearing Holder - Spine Connector | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Bearing%20Holder%20-%20Spine%20Connector.stl |
| Head Holder | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Head%20Holder.stl |
| Snap-Pin Holder | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Snap-Pin%20Holder.stl |
| Head Holder | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Head%20Holder.stl |
| 15 x 15 x 20 mm Aluminum Extrusion | 1 | - |
| 15 x 15 x 10 mm Aluminum Extrusion | 1 | - |
| Head Spine Crosser | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Head%20Spine%20Crosser.stl |
| Mic Mount | 1 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Mic%20Mount.stl |
| Mic Support | 3 | https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Design/STL/Mic%20Support.stl |
| Flexible AMOLED display 7.8 inch | 1 | https://www.alibaba.com/product-detail/7-8-Inch-Flexible-Touch-Screen_1600457566134.html?spm=a2700.galleryofferlist.normal_offer.d_title.493366e02wBSTx |
| Flexible AMOLED display driver | 1 | https://www.alibaba.com/product-detail/7-8-Inch-Flexible-Touch-Screen_1600457566134.html?spm=a2700.galleryofferlist.normal_offer.d_title.493366e02wBSTx |
| M2.5 Nut Bolt | 3 | - |
| M2.5 x 4mm Bolt | 3 | - |
| HDMI to HDMI-mini cable 1m | 1 | - |
| USB-A to USB-C 3.0 cable 1m | 1 | - |

### Items for the Motor Movement Testing ###

| Item | Amount |
| ---- | :---: |
| Arduino Uno | 1 |
| Digital Stepper Driver DM542T | 1 |
| USB-A to USB-B cable | 1 |
| Jumper Wire | 6 |

For Stepper Motor test movement, upload the [script](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Software/stepper_test_movement/stepper_test_movement.ino) to Arduino Uno. When the circuit is assembled, you can control the stepper with keys "w" and "s" to move and "x" to stop movement.
### Circuit Assembly ###
![](https://github.com/incrut/kurenkov-thesis-2024-semubot-neck-face/blob/main/Media/Circuit%20Assembly.png)
