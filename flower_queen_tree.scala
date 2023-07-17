import scala.collection.immutable.List

object RainbowConnection {

  def main(args: Array[String]): Unit = {
     
     val colors = List("Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet")

     var rainbowConnection = ""

     for( color <- colors ) {
    	 rainbowConnection += songLine( color )
     }

     println( rainbowConnection )

  }

  def songLine( color: String ): String = {
     s"Someday we'll find it, the rainbow connection, $color like a dream it will $color with the silence.\n"
  }

}